//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol XRTCVideoFrameBuffer;

@interface XRTCVideoFrame : NSObject
{
    long long _rotation;
    long long _timeStampNs;
    _Bool _mirror;
    _Bool _localCameraFrame;
    int timeStamp;
    id <XRTCVideoFrameBuffer> _buffer;
    struct CGSize _renderSize;
}

@property(nonatomic) _Bool localCameraFrame; // @synthesize localCameraFrame=_localCameraFrame;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
@property(nonatomic) int timeStamp; // @synthesize timeStamp;
@property(readonly, nonatomic) id <XRTCVideoFrameBuffer> buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;
- (id)initWithBuffer:(id)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 scaledWidth:(int)arg2 scaledHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7 rotation:(long long)arg8 timeStampNs:(long long)arg9;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)newI420VideoFrame;
@property(readonly, nonatomic) long long timeStampNs;
@property(readonly, nonatomic) long long rotation;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;

@end
