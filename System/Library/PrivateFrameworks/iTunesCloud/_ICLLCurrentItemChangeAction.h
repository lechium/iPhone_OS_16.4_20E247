//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLCurrentItemChangeAction : PBCodable
{
    NSString *_itemId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000cd99b
- (unsigned long long)hash;	// IMP=0x00000000000cd97e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cd8e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cd86c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cd848
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cd83b
- (id)dictionaryRepresentation;	// IMP=0x00000000000cd7df
- (id)description;	// IMP=0x00000000000cd730

@end

