//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, UIButton, UIColor, UIImage, UIScrollView, UIView;
@protocol CTInputViewGroupInputProtocol, HiChatContainerTableDataProtocol, HiChatEngineContainerDelegate;

@protocol HiChatSessionGeneralProtocol <NSObject>
@property(readonly, nonatomic) NSDictionary *sessionConfigs;
@property(retain, nonatomic) NSArray *multimediaInfos;
@property(readonly, copy, nonatomic) NSString *spmID;
@property(readonly, nonatomic) NSDictionary *launchOption;
@property(readonly, copy, nonatomic) NSString *source;
@property(readonly, copy, nonatomic) NSString *shopID;
@property(readonly, copy, nonatomic) NSString *sessionType;
@property(readonly, copy, nonatomic) NSString *sessionID;
@property(nonatomic) __weak id <HiChatEngineContainerDelegate> containerDelegate;
@property(nonatomic) unsigned long long unReadLimit;
@property(nonatomic) _Bool hasNew;
- (void)groupViewDidChanage:(UIView<CTInputViewGroupInputProtocol> *)arg1;
- (void)rightBarButtonClicked:(id)arg1;
- (void)pasteItem:(id)arg1 type:(NSString *)arg2;
- (void)markSessionAsRead;
- (_Bool)shouldShowUnreadPicker;
- (_Bool)shouldEnableTypingReport;
- (void)refreshDraft;
- (NSString *)draftString;
- (NSString *)mainTitle;
- (NSString *)backButtonTitle;
- (NSString *)cellClassName;
- (NSString *)strategyId;
- (id <HiChatContainerTableDataProtocol>)containerTableHandler;
- (void)tryLoadAfter;
- (void)tryLoadBefore;
- (NSString *)unknowCellTemplateIdByMsgData:(NSDictionary *)arg1;
- (id)initWithLaunchOptions:(NSDictionary *)arg1 configs:(NSDictionary *)arg2;

@optional
- (void)disableAudio;
- (void)enableAudio;
- (_Bool)isConfigTopBanner;
- (void)loadCurrentSessionTopBannerData;
- (void)loadCurrentSessionToolBarData;
- (NSString *)emptyTopBannerCategory;
- (NSString *)defautTopBannerCategory;
- (NSString *)defautToolBarCategory;
- (NSArray *)checkSessionNeedTopBanner;
- (NSArray *)menuBarCategories;
- (NSArray *)checkSessionNeedToolBox;
- (void)loadCurrentSessionToolBoxData;
- (void)remindViewCheck;
- (void)loadNewPage;
- (_Bool)closeCellMenu;
- (void)jumpUnreadTop;
- (void)loadAfter;
- (void)sessionCloseTopBannerWithAnimation:(_Bool)arg1;
- (void)scrollViewDidScrollToTop:(UIScrollView *)arg1;
- (_Bool)scrollViewShouldScrollToTop:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (_Bool)inputContainerEnabled;
- (UIView *)customMainTitleView;
- (UIButton *)customRightBarButtonItem;
- (UIImage *)customNavigationBarBackButtonImage;
- (UIColor *)customNavigationBarBackButtonTitleColor;
- (UIColor *)customNavigationBarTitleColor;
- (UIColor *)opaqueNavigationBarColor;
- (long long)customStatusBarStytle;
- (void)keyboardWillShow;
- (void)addExposureChatMessage:(NSDictionary *)arg1;
- (void)loadAfterDidAppear;
- (void)resumeWithOptions:(NSDictionary *)arg1 isResume:(_Bool)arg2;
- (void)resumeViewDidAppearIsResume:(_Bool)arg1;
- (void)viewWillDestroy;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@end
