//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface GFontLayout : NSObject
{
    NSMutableData *_glyphLayout;
    long long _glyphCount;
    struct {
        float width;
        float ascent;
        float descent;
    } _metrics;
}

@property(nonatomic) long long glyphCount; // @synthesize glyphCount=_glyphCount;
@property(nonatomic) CDStruct_869f9c67 metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSMutableData *glyphLayout; // @synthesize glyphLayout=_glyphLayout;
- (void).cxx_destruct;

@end

