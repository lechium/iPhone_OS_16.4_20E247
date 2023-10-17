//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICFolder.h>

@class NSString;

@interface ICFolder (UI)
+ (id)defaultNavigationBarIcon;	// IMP=0x002000000012e875
+ (id)defaultFilledSystemImageName;	// IMP=0x002000000012e752
+ (id)defaultSystemImageName;	// IMP=0x002000000012e745
+ (id)smartFoldersThatWillBeDeletedAfterDeletingHashtags:(id)arg1;	// IMP=0x002000000012e087
+ (id)foldersWithHashtagAsOnlyFilter:(id)arg1;	// IMP=0x002000000012de20
+ (void)removeUsageOfHashtag:(id)arg1;	// IMP=0x002000000012db47
- (id)navigationBarIconWithSize:(struct CGSize)arg1;	// IMP=0x001000000012e91e
- (id)navigationBarIconOverlaySystemImage;	// IMP=0x001000000012e895
@property(readonly, copy, nonatomic) NSString *filledSystemImageName;
@property(readonly, copy, nonatomic) NSString *systemImageName;
@end
