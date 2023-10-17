//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSUUID, NSXPCConnection, PBDataDetectiveAgency, PBPasteAuthority, UISSlotMachine;

@interface PBPasteboardServerServicer : NSObject
{
    NSXPCConnection *_clientToServerConnection;	// 8 = 0x8
    NSXPCConnection *_serverToClientConnection;	// 16 = 0x10
    NSUUID *_dataOwnerCollectionUUID;	// 24 = 0x18
    PBDataDetectiveAgency *_detectiveAgency;	// 32 = 0x20
    UISSlotMachine *_pasteButtonSlotMachine;	// 40 = 0x28
    PBPasteAuthority *_pasteAuthority;	// 48 = 0x30
    NSMutableDictionary *_activeAnnouncers;	// 56 = 0x38
    NSMutableDictionary *_authorizationReplyBlocks;	// 64 = 0x40
}

+ (id)newServicerForConnection:(id)arg1 detectiveAgency:(id)arg2 pasteButtonSlotMachine:(id)arg3 pasteAuthority:(id)arg4;	// IMP=0x0020000000008988
- (void).cxx_destruct;	// IMP=0x002000000000ece2
@property(readonly, nonatomic) NSMutableDictionary *authorizationReplyBlocks; // @synthesize authorizationReplyBlocks=_authorizationReplyBlocks;
@property(readonly, nonatomic) NSMutableDictionary *activeAnnouncers; // @synthesize activeAnnouncers=_activeAnnouncers;
@property(retain, nonatomic) PBPasteAuthority *pasteAuthority; // @synthesize pasteAuthority=_pasteAuthority;
@property(retain, nonatomic) UISSlotMachine *pasteButtonSlotMachine; // @synthesize pasteButtonSlotMachine=_pasteButtonSlotMachine;
@property(retain, nonatomic) PBDataDetectiveAgency *detectiveAgency; // @synthesize detectiveAgency=_detectiveAgency;
@property(retain, nonatomic) NSUUID *dataOwnerCollectionUUID; // @synthesize dataOwnerCollectionUUID=_dataOwnerCollectionUUID;
@property(retain, nonatomic) NSXPCConnection *serverToClientConnection; // @synthesize serverToClientConnection=_serverToClientConnection;
@property(nonatomic) __weak NSXPCConnection *clientToServerConnection; // @synthesize clientToServerConnection=_clientToServerConnection;
- (void)requestSecurePasteAuthenticationMessageWithContext:(unsigned long long)arg1 forClientVersionedPID:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000eadf
- (void)getRemoteContentForLayerContextWithId:(unsigned long long)arg1 slotStyle:(id)arg2 pasteButtonTag:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000000e98f
- (void)getAllPasteboardsCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e4cb
- (void)performJanitorialTasksCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e162
- (void)didPasteContentsFromPasteboardWithName:(id)arg1 UUID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e14e
- (void)requestPatternDetectionsFromPasteboardWithName:(id)arg1 UUID:(id)arg2 authenticationMessage:(id)arg3 itemIndex:(unsigned long long)arg4 patterns:(id)arg5 needValues:(_Bool)arg6 dataOwner:(long long)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x001000000000d4fc
- (void)requestItemFromPasteboardWithName:(id)arg1 UUID:(id)arg2 authenticationMessage:(id)arg3 itemIndex:(unsigned long long)arg4 typeIdentifier:(id)arg5 dataOwner:(long long)arg6 loadContext:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x001000000000cd0b
- (void)requestFromPasteboardWithName:(id)arg1 UUID:(id)arg2 authenticationMessage:(id)arg3 itemIndex:(unsigned long long)arg4 needData:(_Bool)arg5 dataOwner:(long long)arg6 loadContext:(id)arg7 errorBlock:(CDUnknownBlockType)arg8 pasteboardItemBlock:(CDUnknownBlockType)arg9;	// IMP=0x001000000000bb9e
- (id)pasteAnnoucementForPasteboard:(id)arg1 auditTokenInfo:(id)arg2 loadContext:(id)arg3 timeout:(double)arg4;	// IMP=0x001000000000b74a
- (void)removeActiveAuthorizationAnnouncer:(id)arg1 collection:(id)arg2;	// IMP=0x001000000000b6a7
- (void)setActiveAuthorizationAnnouncer:(id)arg1 collection:(id)arg2;	// IMP=0x001000000000b5de
- (void)didInvalidateItemCollectionWithUUID:(id)arg1;	// IMP=0x001000000000b489
- (void)invalidateActiveAnnouncers;	// IMP=0x001000000000b3e5
- (void)requestUserAuthorizationForPasteboard:(id)arg1 auditTokenInfo:(id)arg2 loadContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000ac34
- (void)announcePasteForPasteboard:(id)arg1 auditTokenInfo:(id)arg2;	// IMP=0x001000000000abea
- (id)hangAssertionForAuditTokenInfo:(id)arg1;	// IMP=0x001000000000aa03
- (void)announcePasteDenied;	// IMP=0x001000000000a9ea
- (void)deletePersistentPasteboardWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a461
- (void)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009991
- (void)localGeneralPasteboardCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009936
- (void)pasteboardWithName:(id)arg1 createIfNeeded:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000098b8
- (void)_pasteboardWithName:(id)arg1 localOnly:(_Bool)arg2 createIfNeeded:(_Bool)arg3 deviceIsLocked:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000008c49
- (void)helloCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008c3c
- (void)connectionWasInvalidated;	// IMP=0x0010000000008c2a
- (id)initWithConnection:(id)arg1 detectiveAgency:(id)arg2 pasteButtonSlotMachine:(id)arg3 pasteAuthority:(id)arg4;	// IMP=0x0010000000008a35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
