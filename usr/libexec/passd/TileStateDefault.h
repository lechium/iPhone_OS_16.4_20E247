//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TileStateDefault
{
}

+ (id)databaseTable;	// IMP=0x004000000008d585
+ (id)_predicateForBaseStatePID:(long long)arg1;	// IMP=0x001000000008d512
+ (id)_predicateForBaseState:(id)arg1;	// IMP=0x001000000008d4a4
+ (void)deleteEntitiesForBaseState:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000008d406
+ (void)inflateState:(id)arg1 forBaseStatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000008d231
+ (id)insertState:(id)arg1 forBaseState:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000008d022
- (id)initWithState:(id)arg1 forBaseState:(id)arg2 inDatabase:(id)arg3;	// IMP=0x004000000008cef9

@end

