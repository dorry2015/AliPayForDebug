//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class APWaspAppInfo, APWaspDetail, AUBadgeView, AUCustomNavigationBar, AUParagraphInputBox, NSString, UIImage, WPCommitOptionView, WPTaskUnitMediaPicker, publictestMoreMenuVoPB;

@interface WPCommitBugViewController : DTViewController <UITextViewDelegate, UIActionSheetDelegate>
{
    APWaspAppInfo *_appInfo;
    long long _projectId;
    CDUnknownBlockType _shouldHidden;
    UIImage *_screenCapture;
    AUParagraphInputBox *_inputBox;
    WPTaskUnitMediaPicker *_mediaPicker;
    WPCommitOptionView *_optionView1;
    WPCommitOptionView *_optionView2;
    AUCustomNavigationBar *_naviView;
    APWaspDetail *_detail;
    NSString *_appNameAndPageName;
    publictestMoreMenuVoPB *_menuData;
    AUBadgeView *_menuBadgeView;
}

@property(retain, nonatomic) AUBadgeView *menuBadgeView; // @synthesize menuBadgeView=_menuBadgeView;
@property(retain, nonatomic) publictestMoreMenuVoPB *menuData; // @synthesize menuData=_menuData;
@property(retain, nonatomic) NSString *appNameAndPageName; // @synthesize appNameAndPageName=_appNameAndPageName;
@property(retain, nonatomic) APWaspDetail *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) AUCustomNavigationBar *naviView; // @synthesize naviView=_naviView;
@property(retain, nonatomic) WPCommitOptionView *optionView2; // @synthesize optionView2=_optionView2;
@property(retain, nonatomic) WPCommitOptionView *optionView1; // @synthesize optionView1=_optionView1;
@property(retain, nonatomic) WPTaskUnitMediaPicker *mediaPicker; // @synthesize mediaPicker=_mediaPicker;
@property(retain, nonatomic) AUParagraphInputBox *inputBox; // @synthesize inputBox=_inputBox;
@property(retain, nonatomic) UIImage *screenCapture; // @synthesize screenCapture=_screenCapture;
@property(copy, nonatomic) CDUnknownBlockType shouldHidden; // @synthesize shouldHidden=_shouldHidden;
@property(nonatomic) long long projectId; // @synthesize projectId=_projectId;
@property(retain, nonatomic) APWaspAppInfo *appInfo; // @synthesize appInfo=_appInfo;
- (void).cxx_destruct;
- (long long)customStatusBarStytle;
- (_Bool)autohideNavigationBar;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)startTinyAppByScheme:(id)arg1 andMenuTitle:(id)arg2;
- (void)showAssitantActionSheet;
- (void)quitSelf;
- (void)quitSelfByQuitBtn;
- (id)setupRequest:(id)arg1;
- (void)SubmitCompletion:(id)arg1 withException:(id)arg2;
- (void)submitBugWithInputText:(id)arg1;
- (_Bool)checkSubmitData;
- (void)updateRemindMessage:(id)arg1 withException:(id)arg2;
- (void)updateRemindMessageWithEnumId:(id)arg1;
- (void)getMoreMenuCompletion:(id)arg1 withException:(id)arg2;
- (void)getMoreMenu;
- (void)submitBugWithImageUpload;
- (void)uploadMediaWithBlock:(CDUnknownBlockType)arg1;
- (void)getCurrentAppNameAndPageName;
- (id)updateBageViewWithStyle:(unsigned long long)arg1 content:(id)arg2 bageView:(id)arg3;
- (void)refreshMessageRemind;
- (void)setupMoreOptionView;
- (void)setupAppInfoView;
- (void)setupCommitBtnView;
- (void)setupAttachmentView;
- (void)setupNavigationView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 andAppID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
