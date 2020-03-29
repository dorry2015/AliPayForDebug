//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TEXSource.h"

@class NSObject, TEXImageSource, UIView;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TEXViewSource : TEXSource
{
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    float _frequence;
    _Bool _started;
    _Bool _needUpdate;
    UIView *_view;
    TEXImageSource *_imageSource;
}

@property(retain, nonatomic) TEXImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
- (void).cxx_destruct;
- (void)setOutputSizeInPixels:(struct CGSize)arg1;
- (id)imageFromView:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end
