//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARTVCMCUCreateRoomResponse, ARTVCMCUJoinRoomResponse, ARTVCMCULeaveRoomResponse, ARTVCMCUNewParticipantNotify, ARTVCMCUParticipantLeaveRoomNotify, ARTVCMCUPreExsitingParticipantsNotify;

@protocol ARTVCMessageRecevieProtocolRoom <NSObject>
- (void)didRecevieParticipantLeaveRoomNotify:(ARTVCMCUParticipantLeaveRoomNotify *)arg1;
- (void)didRecevieNewParticipantNotify:(ARTVCMCUNewParticipantNotify *)arg1;
- (void)didReceviePreExsitingParticipantsNotify:(ARTVCMCUPreExsitingParticipantsNotify *)arg1;
- (void)didRecevieLeaveRoomResponse:(ARTVCMCULeaveRoomResponse *)arg1;
- (void)didRecevieJoinRoomResponse:(ARTVCMCUJoinRoomResponse *)arg1;
- (void)didRecevieCreateRoomResponse:(ARTVCMCUCreateRoomResponse *)arg1;
@end

