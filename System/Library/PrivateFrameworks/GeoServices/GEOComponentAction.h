//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOComponentAction : PBCodable
{
    CDStruct_95bda58d _actions;	// 8 = 0x8
    int _component;	// 32 = 0x20
    _Bool _handleLocally;	// 36 = 0x24
    struct {
        unsigned int has_component:1;
        unsigned int has_handleLocally:1;
    } _flags;	// 40 = 0x28
}

- (unsigned long long)hash;	// IMP=0x000000000111174b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000111165d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011115c3
- (void)writeTo:(id)arg1;	// IMP=0x0000000001111515
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001111506
- (id)jsonRepresentation;	// IMP=0x000000000111105d
- (id)dictionaryRepresentation;	// IMP=0x0000000001110e35
- (id)description;	// IMP=0x0000000001110d86
- (void)dealloc;	// IMP=0x0000000001110c67

@end

