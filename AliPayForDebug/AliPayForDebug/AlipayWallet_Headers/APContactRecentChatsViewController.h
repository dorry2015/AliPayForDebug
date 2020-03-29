//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactBaseViewController.h"

@class AUNetErrorView, NSString;

@interface APContactRecentChatsViewController : APContactBaseViewController
{
    NSString *_userType;
    AUNetErrorView *_emptyView;
}

@property(retain, nonatomic) AUNetErrorView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
- (void).cxx_destruct;
- (id)getSelectSPMID;
- (id)getSPMID;
- (id)customNavigationBarBackButtonImage;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarTitleColor;
- (id)opaqueNavigationBarColor;
- (long long)customStatusBarStytle;
- (void)didSelectContactInfo:(id)arg1;
- (void)clickJumpUrlAppendSessionSwitch:(id)arg1;
- (void)didSelectRecentContactInfo:(id)arg1;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (id)mainDataIndexCharInCommonView:(id)arg1;
- (id)mainDataInCommonView:(id)arg1;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)setupSelectView;
- (void)adjustFrames;
- (void)showEmptyView:(_Bool)arg1;
- (void)reloadUI;
- (id)sortAllTypeRecentsList:(id)arg1;
- (void)reloadRecentContact:(id)arg1;
- (void)loadContact;
- (void)setupNotify;
- (void)configWithDict:(id)arg1;
- (void)viewDidLoad;

@end
