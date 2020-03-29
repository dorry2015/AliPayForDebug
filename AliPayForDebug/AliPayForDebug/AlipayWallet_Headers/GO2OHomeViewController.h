//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OMistBaseViewController.h"

#import "APCustomNavigationBarProtocol-Protocol.h"
#import "AURefreshViewDelegate-Protocol.h"
#import "AUSearchTitleViewDelegate-Protocol.h"
#import "GO2OADPopupViewDataSource-Protocol.h"
#import "GO2OADPopupViewDelegate-Protocol.h"
#import "GO2OCDPManagerDelegate-Protocol.h"
#import "GO2OCollectNavItemDelegate-Protocol.h"
#import "GO2OMyVoucherNavItemDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AULoadingIndicatorView, AUNetErrorView, AURefreshView, AUSearchTitleView, CDPSpaceView, CTTelephonyNetworkInfo, GO2OADPopupView, GO2OBeginnerGuideView, GO2OBottomPopupView, GO2OCDPManager, GO2OHomePageResponse, GO2OMyVoucherNavItemView, GO2OSearchTip, NSDate, NSDateFormatter, NSDictionary, NSLayoutConstraint, NSString, UIButton, UIView;
@protocol H5WebViewInterface;

@interface GO2OHomeViewController : GO2OMistBaseViewController <AUSearchTitleViewDelegate, APCustomNavigationBarProtocol, GO2OMyVoucherNavItemDelegate, GO2OCollectNavItemDelegate, UIScrollViewDelegate, GO2OCDPManagerDelegate, GO2OADPopupViewDataSource, GO2OADPopupViewDelegate, AURefreshViewDelegate>
{
    _Bool _hasShown;
    _Bool _notNeedLocate;
    _Bool _reappear;
    _Bool _fromScheme;
    _Bool _fromManual;
    _Bool _firstTime;
    _Bool _needShowTravelMust;
    _Bool _hasShownTravelMust;
    _Bool _hasClaimedPromotions;
    _Bool _successfullyClaimedPromotions;
    _Bool _isRefreshing;
    GO2OCDPManager *_cdpManager;
    GO2OMyVoucherNavItemView *_voucherNavItem;
    GO2OHomePageResponse *_homePageResponse;
    double _lastLocatingTime;
    UIView<H5WebViewInterface> *_cityWebView;
    AUSearchTitleView *_searchTitleView;
    AUNetErrorView *_errorView;
    CDPSpaceView *_spaceView;
    AURefreshView *_refreshControl;
    AULoadingIndicatorView *_indicatorView;
    NSLayoutConstraint *_tableViewTopConstraint;
    double _spaceViewHeight;
    NSString *_lastHomePageAdCityCode;
    double _homeHideTime;
    NSString *_chInfo;
    NSString *_returnUrl;
    NSString *_returnText;
    CTTelephonyNetworkInfo *_netWorkInfo;
    UIButton *_bigWorldSwitchButton;
    NSString *_cdpobjectId;
    UIView<H5WebViewInterface> *_travelMustView;
    GO2OADPopupView *_popupView;
    GO2OSearchTip *_searchTip;
    GO2OBeginnerGuideView *_beginnerGuideView;
    NSDateFormatter *_dateFormatter;
    GO2OBottomPopupView *_bottomPopupView;
    GO2OHomePageResponse *_currentRefreshResponse;
    NSString *_marketingActivityType;
    NSString *_marketingActivityParam;
    NSDictionary *_schemeParams;
    NSString *_navbarColor;
    NSDate *_h5StartTime;
}

@property(retain, nonatomic) NSDate *h5StartTime; // @synthesize h5StartTime=_h5StartTime;
@property(retain, nonatomic) NSString *navbarColor; // @synthesize navbarColor=_navbarColor;
@property(retain, nonatomic) NSDictionary *schemeParams; // @synthesize schemeParams=_schemeParams;
@property(retain, nonatomic) NSString *marketingActivityParam; // @synthesize marketingActivityParam=_marketingActivityParam;
@property(retain, nonatomic) NSString *marketingActivityType; // @synthesize marketingActivityType=_marketingActivityType;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) GO2OHomePageResponse *currentRefreshResponse; // @synthesize currentRefreshResponse=_currentRefreshResponse;
@property(retain, nonatomic) GO2OBottomPopupView *bottomPopupView; // @synthesize bottomPopupView=_bottomPopupView;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) GO2OBeginnerGuideView *beginnerGuideView; // @synthesize beginnerGuideView=_beginnerGuideView;
@property(retain, nonatomic) GO2OSearchTip *searchTip; // @synthesize searchTip=_searchTip;
@property(nonatomic) _Bool successfullyClaimedPromotions; // @synthesize successfullyClaimedPromotions=_successfullyClaimedPromotions;
@property(nonatomic) _Bool hasClaimedPromotions; // @synthesize hasClaimedPromotions=_hasClaimedPromotions;
@property(retain, nonatomic) GO2OADPopupView *popupView; // @synthesize popupView=_popupView;
@property(nonatomic) _Bool hasShownTravelMust; // @synthesize hasShownTravelMust=_hasShownTravelMust;
@property(nonatomic) _Bool needShowTravelMust; // @synthesize needShowTravelMust=_needShowTravelMust;
@property(retain, nonatomic) UIView<H5WebViewInterface> *travelMustView; // @synthesize travelMustView=_travelMustView;
@property(retain, nonatomic) NSString *cdpobjectId; // @synthesize cdpobjectId=_cdpobjectId;
@property(retain, nonatomic) UIButton *bigWorldSwitchButton; // @synthesize bigWorldSwitchButton=_bigWorldSwitchButton;
@property(retain, nonatomic) CTTelephonyNetworkInfo *netWorkInfo; // @synthesize netWorkInfo=_netWorkInfo;
@property(retain, nonatomic) NSString *returnText; // @synthesize returnText=_returnText;
@property(retain, nonatomic) NSString *returnUrl; // @synthesize returnUrl=_returnUrl;
@property(retain, nonatomic) NSString *chInfo; // @synthesize chInfo=_chInfo;
@property(nonatomic) _Bool firstTime; // @synthesize firstTime=_firstTime;
@property(nonatomic) _Bool fromManual; // @synthesize fromManual=_fromManual;
@property(nonatomic) _Bool fromScheme; // @synthesize fromScheme=_fromScheme;
@property(nonatomic) _Bool reappear; // @synthesize reappear=_reappear;
@property(nonatomic) double homeHideTime; // @synthesize homeHideTime=_homeHideTime;
@property(nonatomic) _Bool notNeedLocate; // @synthesize notNeedLocate=_notNeedLocate;
@property(nonatomic) _Bool hasShown; // @synthesize hasShown=_hasShown;
@property(retain, nonatomic) NSString *lastHomePageAdCityCode; // @synthesize lastHomePageAdCityCode=_lastHomePageAdCityCode;
@property(nonatomic) double spaceViewHeight; // @synthesize spaceViewHeight=_spaceViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *tableViewTopConstraint; // @synthesize tableViewTopConstraint=_tableViewTopConstraint;
@property(retain, nonatomic) AULoadingIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) AURefreshView *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) CDPSpaceView *spaceView; // @synthesize spaceView=_spaceView;
@property(retain, nonatomic) AUNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) AUSearchTitleView *searchTitleView; // @synthesize searchTitleView=_searchTitleView;
@property(retain, nonatomic) UIView<H5WebViewInterface> *cityWebView; // @synthesize cityWebView=_cityWebView;
@property(nonatomic) double lastLocatingTime; // @synthesize lastLocatingTime=_lastLocatingTime;
@property(retain, nonatomic) GO2OHomePageResponse *homePageResponse; // @synthesize homePageResponse=_homePageResponse;
@property(nonatomic) __weak GO2OMyVoucherNavItemView *voucherNavItem; // @synthesize voucherNavItem=_voucherNavItem;
@property(retain, nonatomic) GO2OCDPManager *cdpManager; // @synthesize cdpManager=_cdpManager;
- (void).cxx_destruct;
- (void)popupViewDidClickButton:(id)arg1;
- (void)popupViewDidClickImage:(id)arg1;
- (void)popupViewDidClose:(id)arg1;
- (void)popupViewWillShow:(id)arg1;
- (double)popupView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)popupView:(id)arg1 viewForRowAtIndex:(long long)arg2;
- (unsigned long long)numberOfRowInList:(id)arg1;
- (void)auRefreshViewDidFinishAnimation:(id)arg1;
- (void)auRefreshViewDidTriggerloading:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)logTravelMustFrom:(id)arg1;
- (void)hideTravelMust;
- (void)showTravelMust;
- (void)showBigWorldSwitchButton:(_Bool)arg1;
- (void)hideBigWorldSwitchButton;
- (void)bigWorldSwitchDidTap;
- (void)registerJsApi;
- (void)launchWithOptions:(id)arg1;
- (id)tabRequestInfo;
- (void)launch1212CenterWithJumpUrl:(id)arg1;
- (void)removeSpaceViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSpaceView:(id)arg1;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)collectItemDidClick;
- (void)myVoucherItemDidClick;
- (void)didPressedTitleView:(id)arg1;
- (id)rightCustomNavigationBarButtonItem;
- (id)middleCustomNavigationItemTitleView;
- (id)leftCustomNavigationBarButtonItem;
- (void)saveSelectedCityInfo:(id)arg1;
- (id)lbsCityInfo;
- (void)saveManuallySelectedCity:(id)arg1;
- (void)tabBarDoubleClicked:(id)arg1;
- (void)didSelectCity:(id)arg1;
- (void)registerNotifications;
- (_Bool)needAmendGeographic;
- (void)showErrorViewWithInfoTitle:(id)arg1 exceptionType:(long long)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)showEmptyResultErrorView;
- (void)showErrorViewWithError:(id)arg1;
- (void)showBeginnerGuideIfNecessary;
- (void)initBottomPopup;
- (void)savePopupInfo;
- (void)initPopupView;
- (void)updateNavigationBar;
- (void)reloadDataWithResponse:(id)arg1 fromCache:(_Bool)arg2;
- (void)onRpcFailure:(id)arg1 rpcBeginTime:(id)arg2;
- (void)onRpcSuccess:(id)arg1 rpcBeginTime:(id)arg2 cityInfo:(id)arg3 longitude:(double)arg4 latitude:(double)arg5;
- (void)querySearchTipWithCityInfo:(id)arg1 longitude:(double)arg2 latitude:(double)arg3;
- (void)removeRedPacket;
- (id)pageURLPrefixWithCurrentSurviceEnv;
- (id)pageURLStringForCityCode:(id)arg1;
- (void)showH5PageForCityInfo:(id)arg1;
- (_Bool)shouldShowH5PageForCityInfo:(id)arg1;
- (id)configurationKeyForCityCode:(id)arg1;
- (void)sendRPCRequestWithCityInfo:(id)arg1;
- (void)routeHomePageWithCityInfo:(id)arg1;
- (void)queryHomePageDataWithCityInfo:(id)arg1;
- (void)queryHomePageData;
- (void)startLocatingWithBizType:(id)arg1;
- (void)loadHomePageData;
- (void)showCached;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (_Bool)h5HomePageMonitorDisabled;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateSelectedCityWithCityInfo:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)createView;
- (void)viewDidLoad;
- (void)setOptions:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
