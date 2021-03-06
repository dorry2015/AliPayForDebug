//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMCDNImageAdaptProtocol-Protocol.h"

@class APMOssAdaptor, APMTfsAdaptor, NSString;

@interface APMImageURLAdaptor : NSObject <APMCDNImageAdaptProtocol>
{
    APMTfsAdaptor *_tfsAdaptor;
    APMOssAdaptor *_ossAdaptor;
}

@property(retain, nonatomic) APMOssAdaptor *ossAdaptor; // @synthesize ossAdaptor=_ossAdaptor;
@property(retain, nonatomic) APMTfsAdaptor *tfsAdaptor; // @synthesize tfsAdaptor=_tfsAdaptor;
- (void).cxx_destruct;
- (id)optimizedUrlWithOriginURL:(id)arg1 format:(unsigned long long)arg2;
- (struct CGSize)adjustImageSize:(struct CGSize)arg1 viewSize:(struct CGSize)arg2 cutType:(unsigned long long)arg3 originURL:(id)arg4;
- (_Bool)hasNotSupportCdnRule:(id)arg1 size:(struct CGSize)arg2 cutType:(unsigned long long)arg3;
- (id)adaptorCDNResult:(unsigned long long)arg1 quality:(long long)arg2 imageWidth:(long long)arg3 imageHeight:(long long)arg4 sharpValue:(long long)arg5 cutType:(unsigned long long)arg6 originURL:(id)arg7;
- (id)getBaseUrlAndImageSize:(id)arg1;
- (_Bool)canExecAdaptForURL:(id)arg1;
- (id)getAdaptorEngine:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

