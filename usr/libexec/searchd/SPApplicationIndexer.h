//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SPApplicationIndexer : NSObject
{
    int _changedToken;	// 8 = 0x8
    NSMutableSet *_pendingUpdates;	// 16 = 0x10
}

+ (id)localizedApplicationInfoForCatagoryNames:(id)arg1;	// IMP=0x0040000000072a5b
+ (id)localizedApplicationCatagories;	// IMP=0x0010000000071bec
+ (id)sharedIndexer;	// IMP=0x00100000000716e6
- (void).cxx_destruct;	// IMP=0x002000000007ba9c
@property(retain, nonatomic) NSMutableSet *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(readonly) int changedToken; // @synthesize changedToken=_changedToken;
- (void)updateApplications:(id)arg1 appBundleArray:(id)arg2;	// IMP=0x001000000007a47b
- (void)updateLocalizedNames;	// IMP=0x001000000007a31a
- (void)updateApplicationInformationForExistingItems:(id)arg1 reimportItems:(id)arg2 newItems:(id)arg3 updateCountItems:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000078752
- (void)updateApplicationMetadata:(id)arg1 appsRequiringLocalization:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007858f
- (void)_updateAppMetadata:(id)arg1 appsRequiringLocalization:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007748b
- (id)_updateItem:(id)arg1 forIdentifier:(id)arg2 withLaunchCounts:(id)arg3 requiresLocalizationInfo:(_Bool)arg4;	// IMP=0x0010000000074a32
- (void)addDefaultBundleInformationForURL:(id)arg1 attrSet:(id)arg2 altNames:(id)arg3 namesOnly:(_Bool)arg4 withApp:(id)arg5 enName:(id)arg6;	// IMP=0x0010000000072eac
- (void)start;	// IMP=0x0010000000071bdb
- (void)dealloc;	// IMP=0x0010000000071ba2
- (id)init;	// IMP=0x00100000000718fb

@end
