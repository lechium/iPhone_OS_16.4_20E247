//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COClusterRealm.h"

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _COClusterRealmHome : COClusterRealm
{
    NSUUID *_specificHomeUUID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000002c39
+ (id)realmWithHomeKitHomeIdentifier:(id)arg1;	// IMP=0x0060000000002560
+ (id)realmForCurrent;	// IMP=0x006000000000248a
- (void).cxx_destruct;	// IMP=0x0000000000002cdc
@property(readonly, copy, nonatomic) NSUUID *specificHomeUUID; // @synthesize specificHomeUUID=_specificHomeUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002c41
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002b9e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002b03
- (void)activate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002888
- (id)_identifierForGroupResult:(id)arg1;	// IMP=0x000000000000280b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000273d
- (unsigned long long)hash;	// IMP=0x000000000000269e
- (id)description;	// IMP=0x00000000000025ef
- (id)_initWithPredicate:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000000024e8

@end

