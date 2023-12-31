//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioPacket, FTCancelRequest, FTFinishAudio, FTPronGuessResponse, FTStartPronGuessRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTApgPronGuessMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ApgPronGuessMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000070216
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x00100000000701dc
- (void).cxx_destruct;	// IMP=0x0000000000070747
- (id)flatbuffData;	// IMP=0x00000000000705cf
- (Offset_39cb6be4)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000070314
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property(readonly, nonatomic) FTCancelRequest *session_messageAsFTCancelRequest;
@property(readonly, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property(readonly, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property(readonly, nonatomic) FTStartPronGuessRequest *session_messageAsFTStartPronGuessRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006fc7e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ApgPronGuessMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000006fab0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ApgPronGuessMessage *)arg2;	// IMP=0x000000000006fa9a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000006fa7f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000006fa67

@end

