//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SDTextModel;

@interface SDPillarModel : NSObject
{
    unsigned long long _tag;
    SDTextModel *_text;
    unsigned long long _textDirection;
    double _textGap;
    unsigned long long _color;
    CDStruct_dd4ade68 _data;
}

@property(nonatomic) unsigned long long color; // @synthesize color=_color;
@property(nonatomic) double textGap; // @synthesize textGap=_textGap;
@property(nonatomic) unsigned long long textDirection; // @synthesize textDirection=_textDirection;
@property(retain, nonatomic) SDTextModel *text; // @synthesize text=_text;
@property(nonatomic) CDStruct_dd4ade68 data; // @synthesize data=_data;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)init;

@end
