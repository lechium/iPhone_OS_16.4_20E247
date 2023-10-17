//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, PDDatabaseManager;

@interface PDUserNotificationIconStore : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000342cc4
- (id)_filePathForAssetType:(long long)arg1 identifier:(id)arg2;	// IMP=0x0010000000342bcd
- (id)_imageForAssetType:(long long)arg1 accountIdentifier:(id)arg2;	// IMP=0x0010000000342ad3
- (id)_imageForAssetType:(long long)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x001000000034294d
- (_Bool)_removeAssetsForIdentifier:(id)arg1;	// IMP=0x00100000003428bd
- (_Bool)_assetExists:(long long)arg1 identifier:(id)arg2;	// IMP=0x0010000000342869
- (_Bool)_storeImage:(id)arg1 assetType:(long long)arg2 identifier:(id)arg3;	// IMP=0x00100000003426c8
- (_Bool)removeAssetsForIdentifier:(id)arg1;	// IMP=0x00100000003426b6
- (id)fileURLForAsset:(long long)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x00100000003424b3
- (id)fileURLForAsset:(long long)arg1 accountIdentifier:(id)arg2;	// IMP=0x00100000003422b0
- (id)initWithDatabaseManager:(id)arg1;	// IMP=0x001000000034221b

@end
