//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAnimatedAnnotation.h"

#import "RVMapAnnotationProtocol-Protocol.h"

@class CADisplayLink, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, RVMapCallout, RVMapCommonMapLabel, RVMapCustomLabel, RVMapMoveMarkerModel, RVZebraView, UIColor, UIImage, UIImageView, UIView;

@interface RVMAMapMarker : MAAnimatedAnnotation <RVMapAnnotationProtocol>
{
    _Bool canShowOnTap;
    _Bool clusterEnabled;
    _Bool customCalloutShouldShow;
    _Bool hiddenBubble;
    _Bool isCustomCallout;
    _Bool needLockedToScreen;
    _Bool _isMoving;
    double _alpha;
    double _anchorX;
    double _anchorY;
    UIView *animationViewForAnnotaion;
    NSString *bottomDescString;
    NSDictionary *bubbleConfig;
    RVMapCallout *callout;
    NSString *customCalloutTime;
    long long customCalloutType;
    NSArray *descList;
    NSArray *displayRanges;
    RVZebraView *dslLayoutView;
    double _height;
    UIImage *_icon;
    NSString *iconAppendStr;
    UIColor *iconAppendStrColor;
    NSData *iconData;
    NSDictionary *iconLayout;
    NSNumber *identifier;
    NSString *identifierStr;
    UIImage *imageForAnnotation;
    RVMapCommonMapLabel *labelModel;
    double _latitude;
    double _longitude;
    double mapRotationDegree;
    long long markerLevel;
    double _rotate;
    UIImage *style4Image;
    NSDictionary *styleDic;
    NSArray *subDescList;
    double _width;
    UIImageView *_headIconImageView;
    UIImage *_iconImage;
    UIImageView *_animateImageView;
    RVMapCustomLabel *_descLabel;
    NSString *_descLabelFontType;
    RVMapMoveMarkerModel *_animateSetting;
    NSMutableArray *_tempLatLngArray;
    CADisplayLink *_moveDisplayLink;
    NSMutableDictionary *_moveMarkerCallbackHistoryDic;
    CDUnknownBlockType _aniCallback;
    double _totalLat;
    double _totalLng;
    long long _index;
    double _pastDistance;
    double _stepDistance;
    struct CGPoint lockedToScreenPoint;
}

@property(nonatomic) double stepDistance; // @synthesize stepDistance=_stepDistance;
@property(nonatomic) double pastDistance; // @synthesize pastDistance=_pastDistance;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) double totalLng; // @synthesize totalLng=_totalLng;
@property(nonatomic) double totalLat; // @synthesize totalLat=_totalLat;
@property(copy, nonatomic) CDUnknownBlockType aniCallback; // @synthesize aniCallback=_aniCallback;
@property(retain, nonatomic) NSMutableDictionary *moveMarkerCallbackHistoryDic; // @synthesize moveMarkerCallbackHistoryDic=_moveMarkerCallbackHistoryDic;
@property(retain, nonatomic) CADisplayLink *moveDisplayLink; // @synthesize moveDisplayLink=_moveDisplayLink;
@property(retain, nonatomic) NSMutableArray *tempLatLngArray; // @synthesize tempLatLngArray=_tempLatLngArray;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) RVMapMoveMarkerModel *animateSetting; // @synthesize animateSetting=_animateSetting;
@property(copy, nonatomic) NSString *descLabelFontType; // @synthesize descLabelFontType=_descLabelFontType;
@property(retain, nonatomic) RVMapCustomLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *animateImageView; // @synthesize animateImageView=_animateImageView;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImageView *headIconImageView; // @synthesize headIconImageView=_headIconImageView;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSArray *subDescList; // @synthesize subDescList;
@property(retain, nonatomic) NSDictionary *styleDic; // @synthesize styleDic;
@property(retain, nonatomic) UIImage *style4Image; // @synthesize style4Image;
@property(nonatomic) double rotate; // @synthesize rotate=_rotate;
@property(nonatomic) long long markerLevel; // @synthesize markerLevel;
@property(nonatomic) double mapRotationDegree; // @synthesize mapRotationDegree;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) _Bool needLockedToScreen; // @synthesize needLockedToScreen;
@property(nonatomic) struct CGPoint lockedToScreenPoint; // @synthesize lockedToScreenPoint;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) RVMapCommonMapLabel *labelModel; // @synthesize labelModel;
@property(nonatomic) _Bool isCustomCallout; // @synthesize isCustomCallout;
@property(retain, nonatomic) UIImage *imageForAnnotation; // @synthesize imageForAnnotation;
@property(copy, nonatomic) NSString *identifierStr; // @synthesize identifierStr;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier;
@property(retain, nonatomic) NSDictionary *iconLayout; // @synthesize iconLayout;
@property(retain, nonatomic) NSData *iconData; // @synthesize iconData;
@property(retain, nonatomic) UIColor *iconAppendStrColor; // @synthesize iconAppendStrColor;
@property(retain, nonatomic) NSString *iconAppendStr; // @synthesize iconAppendStr;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool hiddenBubble; // @synthesize hiddenBubble;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) RVZebraView *dslLayoutView; // @synthesize dslLayoutView;
@property(retain, nonatomic) NSArray *displayRanges; // @synthesize displayRanges;
@property(retain, nonatomic) NSArray *descList; // @synthesize descList;
@property(nonatomic) long long customCalloutType; // @synthesize customCalloutType;
@property(retain, nonatomic) NSString *customCalloutTime; // @synthesize customCalloutTime;
@property(nonatomic) _Bool customCalloutShouldShow; // @synthesize customCalloutShouldShow;
@property(nonatomic) _Bool clusterEnabled; // @synthesize clusterEnabled;
@property(nonatomic) _Bool canShowOnTap; // @synthesize canShowOnTap;
@property(retain, nonatomic) RVMapCallout *callout; // @synthesize callout;
@property(retain, nonatomic) NSDictionary *bubbleConfig; // @synthesize bubbleConfig;
@property(copy, nonatomic) NSString *bottomDescString; // @synthesize bottomDescString;
@property(retain, nonatomic) UIView *animationViewForAnnotaion; // @synthesize animationViewForAnnotaion;
@property(nonatomic) double anchorY; // @synthesize anchorY=_anchorY;
@property(nonatomic) double anchorX; // @synthesize anchorX=_anchorX;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (void).cxx_destruct;
- (void)dealloc;
- (double)rotateDegree;
- (void)invalidateAnimation;
- (id)successContent;
- (void)stopMoveAnimation:(CDUnknownBlockType)arg1;
- (void)didMove:(id)arg1;
- (void)addMoveAnimationWithSetting:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateAnimationAnnotationWithImage:(id)arg1;
- (void)prepareAnimationAnnotationWithData:(id)arg1;
- (id)getImageWithStyle4Data:(id)arg1;
- (void)updateDescLabelWithString:(id)arg1;
- (void)prepareForAnnotation;
- (id)init;
- (id)initWithLongitude:(double)arg1 latitude:(double)arg2 andIcon:(id)arg3;
- (_Bool)isLockedToScreen;
- (struct CGPoint)lockedScreenPoint;
- (id)initWithMapAnnotationModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end
