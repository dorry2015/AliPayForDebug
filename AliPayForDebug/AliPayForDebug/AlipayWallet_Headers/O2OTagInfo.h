//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface O2OTagInfo : NSObject
{
    NSString *_tagName;
    NSString *_tagId;
    NSString *_relativeX;
    NSString *_relativeY;
    NSString *_direction;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSString *relativeY; // @synthesize relativeY=_relativeY;
@property(retain, nonatomic) NSString *relativeX; // @synthesize relativeX=_relativeX;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void).cxx_destruct;
- (id)description;

@end

