//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "AFWStockPullLoadingDataSource-Protocol.h"
#import "AFWStockPullLoadingDelegate-Protocol.h"
#import "APSKLaunchpadDelegate-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"
#import "TFRCellScrollDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class AFWStockBottomBarView, AFWStockInfoModel, AFWStockNetworkToastController, AFWStockPullLoading, AFWStockPullToRefreshController, AFWStockQEngineManager, AFWStockSchemaParams, APSKLaunchpad, AUBarButtonItem, CDPSpaceView, NSDate, NSDictionary, NSString, QEngineStockModel, TFRCellsController, UIView;
@protocol APConfigService;

@interface AFWStockDetailViewController : DTViewController <TFRCellScrollDelegate, UIAlertViewDelegate, PromotionCenterDelegate, APSKLaunchpadDelegate, AFWStockPullLoadingDataSource, AFWStockPullLoadingDelegate>
{
    _Bool _tradeShow;
    NSDate *_entryDate;
    NSString *_stockCode;
    _Bool _inPortfolio;
    _Bool _onScreen;
    AFWStockSchemaParams *_schemaParams;
    TFRCellsController *_cv;
    TFRCellsController *_landscapeCv;
    AFWStockInfoModel *_stockInfo;
    AFWStockBottomBarView *_bottomBarView;
    UIView *_bottomBackgroundView;
    AUBarButtonItem *_searchItem;
    CDPSpaceView *_spaceView;
    AFWStockQEngineManager *_dataManager;
    NSString *_actionUrl;
    NSString *_simulatorTradeActionUrl;
    QEngineStockModel *_stockModel;
    AFWStockPullToRefreshController *_refreshController;
    AFWStockNetworkToastController *_toastController;
    AFWStockPullLoading *_pullLoading;
    NSDictionary *_askRedModel;
    APSKLaunchpad *_pad;
    id <APConfigService> _configService;
    NSString *_testType;
}

+ (_Bool)isfootPrintUploadOFF;
@property(retain, nonatomic) NSString *testType; // @synthesize testType=_testType;
@property(retain, nonatomic) id <APConfigService> configService; // @synthesize configService=_configService;
@property(retain, nonatomic) APSKLaunchpad *pad; // @synthesize pad=_pad;
@property(retain, nonatomic) NSDictionary *askRedModel; // @synthesize askRedModel=_askRedModel;
@property(nonatomic) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(retain, nonatomic) AFWStockPullLoading *pullLoading; // @synthesize pullLoading=_pullLoading;
@property(retain, nonatomic) AFWStockNetworkToastController *toastController; // @synthesize toastController=_toastController;
@property(retain, nonatomic) AFWStockPullToRefreshController *refreshController; // @synthesize refreshController=_refreshController;
@property(retain, nonatomic) QEngineStockModel *stockModel; // @synthesize stockModel=_stockModel;
@property(retain, nonatomic) NSString *simulatorTradeActionUrl; // @synthesize simulatorTradeActionUrl=_simulatorTradeActionUrl;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) AFWStockQEngineManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) _Bool inPortfolio; // @synthesize inPortfolio=_inPortfolio;
@property(retain, nonatomic) CDPSpaceView *spaceView; // @synthesize spaceView=_spaceView;
@property(retain, nonatomic) AUBarButtonItem *searchItem; // @synthesize searchItem=_searchItem;
@property(retain, nonatomic) UIView *bottomBackgroundView; // @synthesize bottomBackgroundView=_bottomBackgroundView;
@property(retain, nonatomic) AFWStockBottomBarView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) AFWStockInfoModel *stockInfo; // @synthesize stockInfo=_stockInfo;
@property(retain, nonatomic) TFRCellsController *landscapeCv; // @synthesize landscapeCv=_landscapeCv;
@property(retain, nonatomic) TFRCellsController *cv; // @synthesize cv=_cv;
@property(retain, nonatomic) AFWStockSchemaParams *schemaParams; // @synthesize schemaParams=_schemaParams;
- (void).cxx_destruct;
- (id)customNavigationBarTitleColor;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarBackButtonImage;
- (void)footPrintUpload;
- (void)getRedCountRPC;
- (void)addAskCountObserver;
- (id)promotionBizInfo;
- (void)viewDidLayoutSubviews;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (id)getMinuteChartImage;
- (id)imageForShare;
- (id)shareContentWithURL:(id)arg1;
- (void)shareURL:(id)arg1 toChannel:(id)arg2;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)accountDidExit;
- (void)searchDianogsisSwitcher;
- (void)reloadWhiteVerify;
- (void)rmJobQueueFromForg;
- (void)addJobQueueFromBg;
- (void)removePortfolio;
- (void)addPortfolio;
- (void)portfolioEntryAction;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)closePortfolioEntry;
- (id)stretchLeftAndRightWithimg:(id)arg1 withSize:(struct CGSize)arg2;
- (void)showPortfolioEntry;
- (void)setupBottomBar;
- (id)pullLoadingContentForState:(unsigned long long)arg1;
- (void)pullLoadingDidTrigger:(id)arg1;
- (void)searchClick:(id)arg1;
- (void)addNotify;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pullToRefreshForUT;
- (void)refreshTitleHeaderViewlistedDay:(long long)arg1 issue:(id)arg2 stockInfo:(id)arg3;
- (void)handleExtInfo:(id)arg1;
- (void)handleSecuInfo:(id)arg1 listedDay:(long long)arg2 issue:(id)arg3;
- (void)handleSnapShotData:(id)arg1 listedDay:(long long)arg2 issue:(id)arg3;
- (void)unregistStock;
- (void)registStockDetail;
- (void)showSimulatoTradeEntry:(_Bool)arg1;
- (void)showDiagnosticEntry:(_Bool)arg1;
- (void)showTradeEntry:(_Bool)arg1 content:(id)arg2;
- (void)loadBadgeDataWithSapceCode:(id)arg1 widgetId:(id)arg2;
- (void)checkPortfolioStatus;
- (id)SPMExtParam;
- (void)setupNavibar;
- (void)setupContentContainer;
- (void)preloadLandcapeContainer;
- (void)setupUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithStockInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
