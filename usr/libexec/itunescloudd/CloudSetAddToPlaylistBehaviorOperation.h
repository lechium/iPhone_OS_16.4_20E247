//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudSetAddToPlaylistBehaviorOperation
{
    long long _addToPlaylistBehavior;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000110750
- (void)main;	// IMP=0x0020000000110283
- (_Bool)isPersistent;	// IMP=0x001000000011027b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001101fe
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000110184
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 addToPlaylistBehavior:(long long)arg3;	// IMP=0x0010000000110140
- (id)initWithAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2;	// IMP=0x00100000001100cd

@end

