//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKCloudStoreZoneInvitation;

@interface PDCloudStoreShareInvitationRequestKeys
{
    PKCloudStoreZoneInvitation *_invitation;	// 48 = 0x30
    NSString *_recipientHandle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000199d4e
@property(readonly, copy, nonatomic) NSString *recipientHandle; // @synthesize recipientHandle=_recipientHandle;
@property(readonly, nonatomic) PKCloudStoreZoneInvitation *invitation; // @synthesize invitation=_invitation;
- (id)description;	// IMP=0x0010000000199c47
- (_Bool)canCoalesceRequest:(id)arg1;	// IMP=0x0010000000199980
- (id)initWithInvitation:(id)arg1 recipientHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001998d1

@end

