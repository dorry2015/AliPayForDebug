//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OTemplateController.h"

@class BEECustomAlertView, NSString;

@interface O2OPOrderDetailVoucherController : O2OTemplateController
{
    BEECustomAlertView *_guideAlertView;
    NSString *_useAction;
}

@property(copy, nonatomic) NSString *useAction; // @synthesize useAction=_useAction;
@property(retain, nonatomic) BEECustomAlertView *guideAlertView; // @synthesize guideAlertView=_guideAlertView;
- (void).cxx_destruct;
- (void)doLongPressCopy:(id)arg1;
- (void)closeGuide;
- (void)doUse;
- (void)useNow:(id)arg1;
- (void)expand;
- (void)clickProtect;

@end
