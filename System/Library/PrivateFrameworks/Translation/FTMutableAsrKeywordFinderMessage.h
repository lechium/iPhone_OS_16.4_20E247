//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTKeywordFinderRequest, FTKeywordFinderResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableAsrKeywordFinderMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x006000000009c886
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x006000000009c7f9
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x006000000009c7b9
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTKeywordFinderResponse *session_messageAsFTKeywordFinderResponse;
@property(copy, nonatomic) FTKeywordFinderRequest *session_messageAsFTKeywordFinderRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009c38c
- (id)init;	// IMP=0x000000000009c2fe

@end
