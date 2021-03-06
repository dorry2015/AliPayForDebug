//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AUPlusView, UIImageView, UIView;
@protocol AUImagePickerDataProtocol;

@interface AUImagePickerCell : UICollectionViewCell
{
    unsigned long long _type;
    id <AUImagePickerDataProtocol> _data;
    UIImageView *_imageView;
    AUPlusView *_addView;
    UIImageView *_errorView;
    UIView *_markerView;
}

@property(retain, nonatomic) UIView *markerView; // @synthesize markerView=_markerView;
@property(retain, nonatomic) UIImageView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) AUPlusView *addView; // @synthesize addView=_addView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) id <AUImagePickerDataProtocol> data; // @synthesize data=_data;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadImage;
- (void)setupMarkerView;
- (void)loadWithData:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

