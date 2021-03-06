//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMMessageProcess.h"

#import "ARTVCP2pSignalSendProtocol-Protocol.h"
#import "ARTVCPureWebsocketDelegate-Protocol.h"

@class ARTVCPureWebsocket, ARTVCTimerProxy, NSLock, NSMutableArray, NSString;
@protocol AMChannelProtocol;

@interface AMP2pSignalChannel : AMMessageProcess <ARTVCPureWebsocketDelegate, ARTVCP2pSignalSendProtocol>
{
    _Bool _heartbeatOnOff;
    _Bool _wssHasOpenedOnce;
    int _heartbeatInterval;
    id <AMChannelProtocol> _delegate;
    ARTVCPureWebsocket *_webSocket;
    NSString *_callerUid;
    NSString *_bizName;
    NSString *_subBiz;
    long long _requestId;
    NSMutableArray *_messageQueue;
    NSLock *_messageQLock;
    long long _serverType;
    ARTVCTimerProxy *_heartbeatTimer;
}

@property(nonatomic) _Bool wssHasOpenedOnce; // @synthesize wssHasOpenedOnce=_wssHasOpenedOnce;
@property(retain, nonatomic) ARTVCTimerProxy *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(nonatomic) int heartbeatInterval; // @synthesize heartbeatInterval=_heartbeatInterval;
@property(nonatomic) _Bool heartbeatOnOff; // @synthesize heartbeatOnOff=_heartbeatOnOff;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property(retain, nonatomic) NSLock *messageQLock; // @synthesize messageQLock=_messageQLock;
@property(retain, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(nonatomic) long long requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *subBiz; // @synthesize subBiz=_subBiz;
@property(copy, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(copy, nonatomic) NSString *callerUid; // @synthesize callerUid=_callerUid;
@property(retain, nonatomic) ARTVCPureWebsocket *webSocket; // @synthesize webSocket=_webSocket;
@property(nonatomic) __weak id <AMChannelProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchSignatureAndSendCreateRoom:(id)arg1;
- (_Bool)preParseRecvedMsg:(id)arg1;
- (void)stopHeartbeatTimer;
- (void)startHeartbeatTimer;
- (void)sendHeartbeat;
- (void)sendHeartbeatIfNeed;
- (void)parseRoomConfigWithJson:(id)arg1;
- (void)didWebsocketConnectionStatusChangeTo:(int)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)sendNotifyAckWithRequestId:(long long)arg1 opcmd:(int)arg2 extra:(id)arg3;
- (void)drainAllMessageRemainInQueue;
- (void)sendMessage:(id)arg1 isHeartbeat:(_Bool)arg2;
- (_Bool)isNotifyMsg:(int)arg1;
- (_Bool)removeFromMessageQueueByrequestId:(long long)arg1 opcmd:(int)arg2;
- (void)addToMessageQueue:(id)arg1;
- (void)sendTurnRecordingInfoRequest:(id)arg1;
- (void)sendHeartbeatRequest;
- (void)sendForwardMessageRequest:(id)arg1;
- (void)sendIceMessageRequest:(id)arg1;
- (void)sendReplyRequest:(id)arg1;
- (void)sendEndFunctionCallRequest:(id)arg1;
- (void)sendStartFunctionCallRequest:(id)arg1;
- (void)sendReplyToInviteRequest:(id)arg1;
- (void)sendInviteRequest:(id)arg1;
- (void)sendLeaveRoomRequest:(id)arg1;
- (void)sendJoinRoomRequest:(id)arg1;
- (void)sendCreateRoomRequest:(id)arg1;
- (void)sendStatisticReport:(id)arg1;
- (void)initWebsocketWithServerType:(long long)arg1;
- (void)dealloc;
- (id)initWithServerType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

