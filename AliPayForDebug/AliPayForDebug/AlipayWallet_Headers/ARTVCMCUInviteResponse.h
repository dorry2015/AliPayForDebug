//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTVCMCUBasicResponse.h"

@class NSString;

@interface ARTVCMCUInviteResponse : ARTVCMCUBasicResponse
{
    NSString *_inviteId;
}

@property(copy, nonatomic) NSString *inviteId; // @synthesize inviteId=_inviteId;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)arg1;

@end
