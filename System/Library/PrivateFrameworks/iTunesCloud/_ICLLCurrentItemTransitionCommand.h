//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLCurrentItemTransitionCommand : PBCodable
{
    NSString *_previousItemId;	// 8 = 0x8
    NSString *_transitionItemId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008a778
- (unsigned long long)hash;	// IMP=0x000000000008a72b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008a663
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008a5c5
- (void)writeTo:(id)arg1;	// IMP=0x000000000008a568
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008a55b
- (id)dictionaryRepresentation;	// IMP=0x000000000008a4d8
- (id)description;	// IMP=0x000000000008a429

@end
