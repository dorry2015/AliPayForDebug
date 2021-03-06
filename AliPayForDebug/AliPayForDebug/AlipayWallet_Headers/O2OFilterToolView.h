//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol O2OFilterToolViewDelegate;

@interface O2OFilterToolView : UIView
{
    _Bool _isOpenLighting;
    _Bool _isOpenBeauty;
    id <O2OFilterToolViewDelegate> _delegate;
    UIButton *_changesCameraScale;
    UIButton *_cancelBtn;
    UIView *_back;
    UIButton *_lightingBtn;
    UIButton *_beautyBtn;
    UIButton *_changeCameraBtn;
}

@property(nonatomic) _Bool isOpenBeauty; // @synthesize isOpenBeauty=_isOpenBeauty;
@property(nonatomic) _Bool isOpenLighting; // @synthesize isOpenLighting=_isOpenLighting;
@property(retain, nonatomic) UIButton *changeCameraBtn; // @synthesize changeCameraBtn=_changeCameraBtn;
@property(retain, nonatomic) UIButton *beautyBtn; // @synthesize beautyBtn=_beautyBtn;
@property(retain, nonatomic) UIButton *lightingBtn; // @synthesize lightingBtn=_lightingBtn;
@property(retain, nonatomic) UIView *back; // @synthesize back=_back;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *changesCameraScale; // @synthesize changesCameraScale=_changesCameraScale;
@property(nonatomic) __weak id <O2OFilterToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showLightingBtn;
- (void)hiddenLightingBtn;
- (void)didClickChangeCameraScale;
- (void)didClickChangeCameraBtn;
- (void)didClickBeautyBtn;
- (void)didClickLightingBtn;
- (void)didClickCancelBtn;
- (void)setupUI;
- (void)initFilterToolView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

