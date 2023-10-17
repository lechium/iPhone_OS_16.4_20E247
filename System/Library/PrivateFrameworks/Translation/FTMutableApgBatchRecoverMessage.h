//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTBatchRecoverFinalResponse, FTPronGuessResponse, FTStartBatchRecoverRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableApgBatchRecoverMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x00600000000983d0
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x006000000009831e
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x00600000000982e4
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTBatchRecoverFinalResponse *session_messageAsFTBatchRecoverFinalResponse;
@property(copy, nonatomic) FTPronGuessResponse *session_messageAsFTPronGuessResponse;
@property(copy, nonatomic) FTStartBatchRecoverRequest *session_messageAsFTStartBatchRecoverRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000097db8
- (id)init;	// IMP=0x0000000000097d2a

@end
