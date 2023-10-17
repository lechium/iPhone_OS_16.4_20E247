//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTErrorBlamerRequest, FTErrorBlamerResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTAsrErrorBlamerMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AsrErrorBlamerMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000073f61
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x0010000000073f21
- (void).cxx_destruct;	// IMP=0x00000000000742d0
- (id)flatbuffData;	// IMP=0x0000000000074158
- (Offset_e1cbed1c)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000073fee
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTErrorBlamerResponse *session_messageAsFTErrorBlamerResponse;
@property(readonly, nonatomic) FTErrorBlamerRequest *session_messageAsFTErrorBlamerRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073cbf
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrErrorBlamerMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000073af1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrErrorBlamerMessage *)arg2;	// IMP=0x0000000000073adb
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000073ac0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000073aa8

@end
