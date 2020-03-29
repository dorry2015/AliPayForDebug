//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTView.h"

#import "LOTAssetsRetriver-Protocol.h"

@class LOTAnimationView, NSDictionary, NSString, RCTBridge;

@interface RCTLottieView : RCTView <LOTAssetsRetriver>
{
    LOTAnimationView *_animationView;
    RCTBridge *_bridge;
    _Bool _autoReverse;
    NSString *_path;
    double _speed;
    double _repeatCount;
    CDUnknownBlockType _onDataReady;
    CDUnknownBlockType _onDataFailed;
    CDUnknownBlockType _onAnimationStart;
    CDUnknownBlockType _onAnimationEnd;
    CDUnknownBlockType _onAnimationRepeat;
    CDUnknownBlockType _onAnimationCancel;
    NSString *_lottiePath;
    NSDictionary *_imagesForRefer;
}

@property(retain, nonatomic) NSDictionary *imagesForRefer; // @synthesize imagesForRefer=_imagesForRefer;
@property(retain, nonatomic) NSString *lottiePath; // @synthesize lottiePath=_lottiePath;
@property(copy, nonatomic) CDUnknownBlockType onAnimationCancel; // @synthesize onAnimationCancel=_onAnimationCancel;
@property(copy, nonatomic) CDUnknownBlockType onAnimationRepeat; // @synthesize onAnimationRepeat=_onAnimationRepeat;
@property(copy, nonatomic) CDUnknownBlockType onAnimationEnd; // @synthesize onAnimationEnd=_onAnimationEnd;
@property(copy, nonatomic) CDUnknownBlockType onAnimationStart; // @synthesize onAnimationStart=_onAnimationStart;
@property(copy, nonatomic) CDUnknownBlockType onDataFailed; // @synthesize onDataFailed=_onDataFailed;
@property(copy, nonatomic) CDUnknownBlockType onDataReady; // @synthesize onDataReady=_onDataReady;
@property(nonatomic) _Bool autoReverse; // @synthesize autoReverse=_autoReverse;
@property(nonatomic) double repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)getImageOfReferenceId:(id)arg1;
- (id)getImageOfPath:(id)arg1;
- (_Bool)isBase64ImageString:(id)arg1;
- (id)parseBuildinImages:(id)arg1;
- (void)applyProperties;
- (void)replaceAnimationView:(id)arg1;
- (id)getApp;
- (double)getDuration;
- (void)pause;
- (void)stop;
- (void)setProgress:(double)arg1;
- (void)playFromProgress:(double)arg1 toProgress:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)playFromFrame:(id)arg1 toFrame:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)play:(CDUnknownBlockType)arg1;
- (void)play;
- (void)setSourceJson:(id)arg1;
- (void)setResizeMode:(id)arg1;
- (id)animationJSONWithData:(id)arg1;
- (void)updateLottieWithData:(id)arg1;
- (void)reactSetFrame:(struct CGRect)arg1;
- (id)initWithBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
