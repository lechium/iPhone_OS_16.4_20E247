//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PHASEGeneratorNodeDefinition.h"

@class NSUUID;

__attribute__((visibility("hidden")))
@interface PHASEExternalOutputStreamNodeDefinition : PHASEGeneratorNodeDefinition
{
    _Bool _normalize;	// 8 = 0x8
    unsigned int _channelLayoutTag;	// 12 = 0xc
    NSUUID *_uuid;	// 16 = 0x10
}

+ (id)new;	// IMP=0x006000000002ffe8
- (void).cxx_destruct;	// IMP=0x0000000000030141
@property(nonatomic) _Bool normalize; // @synthesize normalize=_normalize;
@property(readonly, nonatomic) unsigned int channelLayoutTag; // @synthesize channelLayoutTag=_channelLayoutTag;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)initWithExternalOutputStreamUUID:(id)arg1 mixerDefinition:(id)arg2 channelLayoutTag:(unsigned int)arg3 uid:(id)arg4;	// IMP=0x0000000000030000
- (id)init;	// IMP=0x000000000002ffaa

@end
