//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface BRCClientRanksPersistedState
{
    unsigned long long _nextItemRowID;	// 8 = 0x8
    unsigned long long _nextNotifRank;	// 16 = 0x10
    unsigned long long _nextPackageItemRank;	// 24 = 0x18
    unsigned long long _telemetryMinRowID;	// 32 = 0x20
    long long _telemetryToken;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000017b125
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;	// IMP=0x006000000017ad9e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017b035
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017af3c
- (id)init;	// IMP=0x000000000017aee2
- (id)description;	// IMP=0x000000000017ae98
@property(nonatomic) long long telemetryToken;
@property(nonatomic) unsigned long long telemetryMinRowID;
@property(nonatomic) unsigned long long nextPackageItemRank;
- (unsigned long long)allocatePackageItemRank;	// IMP=0x000000000017ac5a
@property(nonatomic) unsigned long long nextNotifRank;
- (unsigned long long)allocateNotifRank;	// IMP=0x000000000017ab92
- (unsigned long long)allocateItemRowID;	// IMP=0x000000000017ab3a
@property(readonly, nonatomic) unsigned long long nextItemRowID;

@end
