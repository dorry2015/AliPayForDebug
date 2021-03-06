//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIViewController.h"

#import "VIInternationalPasswordVerifyDelegate-Protocol.h"
#import "VIPasswdViewDelegate-Protocol.h"

@class NSString, VIInternationalPasswordData, VIInternationalPasswordModule, VIInternationalPasswordPopupView, VIInternationalPasswordVerifyService, VIPasswdViewStyle;

@interface VIInternationalPasswordViewController : VIViewController <VIPasswdViewDelegate, VIInternationalPasswordVerifyDelegate>
{
    _Bool _hideTip;
    VIInternationalPasswordPopupView *_popupView;
    VIInternationalPasswordModule *_module;
    VIPasswdViewStyle *_style;
    VIInternationalPasswordData *_data;
    VIInternationalPasswordVerifyService *_verifyService;
}

@property(retain, nonatomic) VIInternationalPasswordVerifyService *verifyService; // @synthesize verifyService=_verifyService;
@property(retain, nonatomic) VIInternationalPasswordData *data; // @synthesize data=_data;
@property(retain, nonatomic) VIPasswdViewStyle *style; // @synthesize style=_style;
@property(nonatomic) _Bool hideTip; // @synthesize hideTip=_hideTip;
@property(nonatomic) __weak VIInternationalPasswordModule *module; // @synthesize module=_module;
@property(retain, nonatomic) VIInternationalPasswordPopupView *popupView; // @synthesize popupView=_popupView;
- (void).cxx_destruct;
- (void)logForCode:(id)arg1 btnIndex:(long long)arg2;
- (void)handleOnResponse:(id)arg1 status:(unsigned long long)arg2 verifyStatus:(unsigned long long)arg3 userAction:(unsigned long long)arg4;
- (void)passwdViewDidSubmit:(id)arg1 withData:(id)arg2;
- (void)passwdViewOnProtocolClick:(id)arg1 WithProtocolUrl:(id)arg2;
- (void)passwdViewOnTryOthersClicked:(id)arg1;
- (void)passwdViewOnForgetPasswdClicked:(id)arg1;
- (void)passwdViewDidCancel:(id)arg1;
- (void)passwdViewDidSubmit:(id)arg1 withInputView:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

