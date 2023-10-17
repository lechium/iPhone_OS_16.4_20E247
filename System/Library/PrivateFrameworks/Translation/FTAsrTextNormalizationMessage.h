//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextNormalizationRequest, FTTextNormalizationResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTAsrTextNormalizationMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AsrTextNormalizationMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000075001
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x0010000000074fc1
- (void).cxx_destruct;	// IMP=0x0000000000075370
- (id)flatbuffData;	// IMP=0x00000000000751f8
- (Offset_649e23cd)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000007508e
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTTextNormalizationResponse *session_messageAsFTTextNormalizationResponse;
@property(readonly, nonatomic) FTTextNormalizationRequest *session_messageAsFTTextNormalizationRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000074d5f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrTextNormalizationMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000074b91
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AsrTextNormalizationMessage *)arg2;	// IMP=0x0000000000074b7b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000074b60
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000074b48

@end
