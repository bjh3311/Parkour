using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;

using GoogleMobileAds.Api;

public class GoogleAD : MonoBehaviour
{
    private BannerView bannerView;
    private InterstitialAd interstitial;//전면광고 객체
    // Start is called before the first frame update
    void Start()
    {
        MobileAds.Initialize(initStatus => {});//모바일 광고 SDK 초기화
        /*
            가끔 어떤 코드 보면 MobileAds.Initialize(appId); 이렇게 써 있다.
            최신 버전에서는 지원 안하므로 위와 같이 해주자
        */
        RequestInterstitial();
    }
    private void RequestInterstitial()//Interstitial은 전면광고라는 뜻이다. 전면광고를 요청하는 함수
    {
        string adUnitId="ca-app-pub-3940256099942544/1033173712";//전면광고 ID
        this.interstitial=new InterstitialAd(adUnitId);//전면광고 초기화

        
        this.interstitial.OnAdLoaded += HandleOnAdLoaded;// Called when an ad request has successfully loaded.
   
        this.interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad; // 광고요청이 광고불러오는데 실패했을때 호출
   
        this.interstitial.OnAdOpening += HandleOnAdOpening; // 광고가 켜졌을때 호출됨
   
        this.interstitial.OnAdClosed += HandleOnAdClosed; //광고가 꺼졌을때 호출됨

        AdRequest request=new AdRequest.Builder().Build();//Creat an empty ad request
        this.interstitial.LoadAd(request);//request와 함께 전면광고를 호출

    }   

    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLoaded event received");
    }   

    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)//광고로드 실패했을때 원인분석용 함수
    {
        LoadAdError loadAdError = args.LoadAdError;

        // Gets the domain from which the error came.
        string domain = loadAdError.GetDomain();

        // Gets the error code. See
        // https://developers.google.com/android/reference/com/google/android/gms/ads/AdRequest
        // and https://developers.google.com/admob/ios/api/reference/Enums/GADErrorCode
        // for a list of possible codes.
        int code = loadAdError.GetCode();

        // Gets an error message.
        // For example "Account not approved yet". See
        // https://support.google.com/admob/answer/9905175 for explanations of
        // common errors.
        string message = loadAdError.GetMessage();

        // Gets the cause of the error, if available.
        AdError underlyingError = loadAdError.GetCause();

        // All of this information is available via the error's toString() method.
        Debug.Log("Load error string: " + loadAdError.ToString());

        // Get response information, which may include results of mediation requests.
        ResponseInfo responseInfo = loadAdError.GetResponseInfo();
        Debug.Log("Response info: " + responseInfo.ToString());
    }
    public void HandleOnAdOpening(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdOpening event received");  
    }

    public void HandleOnAdClosed(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdClosed event received");
    }
    public void GameOver()//게임오버가 되었을때 실행되게 구현
    {
        if(this.interstitial.IsLoaded())//광고로드가 완료되었다면 
        {
            this.interstitial.Show();
        }
    }

}
