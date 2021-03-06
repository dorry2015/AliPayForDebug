//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PECollectBanner, PECollectTotalHeadView, PEPayeeRecordView, PEQRCodeHelper, TTTAttributedLabel, UIButton, UIImageView, UILabel, UIView;
@protocol PECollectCodeControllerDelegate;

@interface PECollectCodeController : NSObject
{
    NSString *_collectAmount;
    NSString *_collectMemo;
    NSString *_collectCodeId;
    NSString *_onlineQRCode;
    NSString *_offlineQRCode;
    id <PECollectCodeControllerDelegate> _delegate;
    UIView *_collectCodeView;
    UIImageView *_curUserHead;
    PECollectBanner *_banner;
    TTTAttributedLabel *_collectAmountLabel;
    UILabel *_collectMemoLabel;
    PEPayeeRecordView *_recordViewNewLine;
    UIView *_qrMaskView;
    UIImageView *_qrcodeImgView;
    TTTAttributedLabel *_collectIndicator;
    UIButton *_changeAmountBtn;
    UIButton *_saveImageBtn;
    UIView *_buttonView;
    UIView *_viewSlogan;
    PEQRCodeHelper *_qrcodeHelper;
    PECollectTotalHeadView *_formHeadView;
    UIView *_noticeBannerView;
    UIView *_recordView;
    UILabel *_lblSubtitle;
}

@property(retain, nonatomic) UILabel *lblSubtitle; // @synthesize lblSubtitle=_lblSubtitle;
@property(retain, nonatomic) UIView *recordView; // @synthesize recordView=_recordView;
@property(retain, nonatomic) UIView *noticeBannerView; // @synthesize noticeBannerView=_noticeBannerView;
@property(retain, nonatomic) PECollectTotalHeadView *formHeadView; // @synthesize formHeadView=_formHeadView;
@property(retain, nonatomic) PEQRCodeHelper *qrcodeHelper; // @synthesize qrcodeHelper=_qrcodeHelper;
@property(retain, nonatomic) UIView *viewSlogan; // @synthesize viewSlogan=_viewSlogan;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIButton *saveImageBtn; // @synthesize saveImageBtn=_saveImageBtn;
@property(retain, nonatomic) UIButton *changeAmountBtn; // @synthesize changeAmountBtn=_changeAmountBtn;
@property(retain, nonatomic) TTTAttributedLabel *collectIndicator; // @synthesize collectIndicator=_collectIndicator;
@property(retain, nonatomic) UIImageView *qrcodeImgView; // @synthesize qrcodeImgView=_qrcodeImgView;
@property(retain, nonatomic) UIView *qrMaskView; // @synthesize qrMaskView=_qrMaskView;
@property(retain, nonatomic) PEPayeeRecordView *recordViewNewLine; // @synthesize recordViewNewLine=_recordViewNewLine;
@property(retain, nonatomic) UILabel *collectMemoLabel; // @synthesize collectMemoLabel=_collectMemoLabel;
@property(retain, nonatomic) TTTAttributedLabel *collectAmountLabel; // @synthesize collectAmountLabel=_collectAmountLabel;
@property(retain, nonatomic) PECollectBanner *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) UIImageView *curUserHead; // @synthesize curUserHead=_curUserHead;
@property(retain, nonatomic) UIView *collectCodeView; // @synthesize collectCodeView=_collectCodeView;
@property(nonatomic) __weak id <PECollectCodeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *offlineQRCode; // @synthesize offlineQRCode=_offlineQRCode;
@property(retain, nonatomic) NSString *onlineQRCode; // @synthesize onlineQRCode=_onlineQRCode;
@property(retain, nonatomic) NSString *collectCodeId; // @synthesize collectCodeId=_collectCodeId;
@property(retain, nonatomic) NSString *collectMemo; // @synthesize collectMemo=_collectMemo;
@property(retain, nonatomic) NSString *collectAmount; // @synthesize collectAmount=_collectAmount;
- (void).cxx_destruct;
- (void)buildRecordViewNewLine:(id)arg1;
- (void)updateRecordSubtitle:(id)arg1;
- (void)updateNoticeBannerWithShow:(_Bool)arg1 inTableView:(id)arg2 extraBlock:(CDUnknownBlockType)arg3;
- (void)longPressed:(id)arg1;
- (_Bool)showNoticeBanner:(id)arg1 inTableView:(id)arg2;
- (void)updateTotalCollect:(id)arg1;
- (void)disableSettingAmount;
- (void)onSaveImageButtonClicked:(id)arg1;
- (void)changeAmount;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (id)getNameLabelWithFrame:(struct CGRect)arg1 text:(id)arg2;
- (void)saveCollectCodeViewToImageGallery:(id)arg1;
- (void)onRecordButtonClicked;
- (id)codeHelper;
- (id)getCollectMemoLabel;
- (void)sloganClicked:(id)arg1;
- (void)buildSlogan:(_Bool)arg1;
- (id)getCollectAmountLabel;
- (id)getQrCodeMaskView;
- (id)getQrCodeImageView;
- (id)getReciverHeadImageView;
- (id)getSaveImageBtn;
- (id)getChangeCollectAmountBtn;
- (double)buttonAreaBtnWidth;
- (double)buttonaAreaInset;
- (id)getRecordAreaView;
- (id)getButtonAreaView;
- (id)getCollectCodeView;
- (id)getQrCodeContainerView;
- (void)buildQrMaskAndImageView;
- (void)buildCollectCodeView;
- (void)updateCollectCodeViewWithAmount:(id)arg1 memo:(id)arg2 codeId:(id)arg3 qrCodeUrl:(id)arg4 offlinQrCodeUrl:(id)arg5 isFromSetting:(_Bool)arg6;
- (void)update;
- (id)generateCollectCodeView;
@property(readonly, nonatomic) NSArray *fadeoutViews;
@property(readonly, nonatomic) NSArray *dismissViews;
@property(readonly, nonatomic) NSArray *flipViews;
@property(readonly, nonatomic) long long mainCodeVCMaskHeight;
- (double)viewSlogonOffset;
- (double)qrViewTopMargin;
- (double)slogonTopMargin;
- (double)qrViewHeight;

@end

