//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SLShareableContentInitiatorRequest, SLShareableContentMetadata;

__attribute__((visibility("hidden")))
@interface SLFetchShareableContentMetadataActionResponse
{
    SLShareableContentMetadata *_metadata;	// 8 = 0x8
    SLShareableContentInitiatorRequest *_initiatorRequest;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002d8ef
+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x006000000002d6ad
+ (id)responseWithMetadata:(id)arg1 initiatorRequest:(id)arg2;	// IMP=0x006000000002d618
- (void).cxx_destruct;	// IMP=0x000000000002db7b
@property(retain, nonatomic) SLShareableContentInitiatorRequest *initiatorRequest; // @synthesize initiatorRequest=_initiatorRequest;
@property(retain, nonatomic) SLShareableContentMetadata *metadata; // @synthesize metadata=_metadata;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002da24
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d8f7
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x000000000002d7e2
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x000000000002d6b5

@end
