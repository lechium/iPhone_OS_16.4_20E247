//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLPlaybackControlSettings;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackControlSettingsCommand : PBCodable
{
    _ICLLPlaybackControlSettings *_settings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000013a0b
- (unsigned long long)hash;	// IMP=0x00000000000139ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013954
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000138dc
- (void)writeTo:(id)arg1;	// IMP=0x00000000000138b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000138ab
- (id)dictionaryRepresentation;	// IMP=0x0000000000013821
- (id)description;	// IMP=0x0000000000013772

@end
