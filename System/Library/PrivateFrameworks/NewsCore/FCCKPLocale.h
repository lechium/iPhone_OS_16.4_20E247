//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FCCKPLocale : PBCodable
{
    NSString *_activeKeyboard;	// 8 = 0x8
    NSMutableArray *_enabledKeyboards;	// 16 = 0x10
    NSString *_languageCode;	// 24 = 0x18
    NSString *_regionCode;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001f84b8
- (unsigned long long)hash;	// IMP=0x00000000001f83ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f82d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f80b6
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f7f1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f7f10
- (id)dictionaryRepresentation;	// IMP=0x00000000001f7c41
- (id)description;	// IMP=0x00000000001f7b92

@end
