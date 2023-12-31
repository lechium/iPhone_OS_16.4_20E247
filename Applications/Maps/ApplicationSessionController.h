//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoverSheetSceneAssociation, NSMapTable, NSString, PlatformController;

@interface ApplicationSessionController : NSObject
{
    PlatformController *_primaryPlatformController;	// 8 = 0x8
    PlatformController *_currentlyNavigatingPlatformController;	// 16 = 0x10
    NSMapTable *_activeiOSPlatformControllersToCoverSheetSceneAssociation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000057e4b8
@property(retain, nonatomic) NSMapTable *activeiOSPlatformControllersToCoverSheetSceneAssociation; // @synthesize activeiOSPlatformControllersToCoverSheetSceneAssociation=_activeiOSPlatformControllersToCoverSheetSceneAssociation;
@property(retain, nonatomic) PlatformController *currentlyNavigatingPlatformController; // @synthesize currentlyNavigatingPlatformController=_currentlyNavigatingPlatformController;
@property(readonly, nonatomic) PlatformController *primaryPlatformController; // @synthesize primaryPlatformController=_primaryPlatformController;
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000057e3b3
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000057e3ad
- (void)removeiOSPlatformController:(id)arg1;	// IMP=0x001000000057e307
- (id)addActiveiOSPlatformControllerForScene:(id)arg1;	// IMP=0x001000000057e1ed
@property(readonly, nonatomic) CoverSheetSceneAssociation *currentlyNavigatingCoverSheetSceneAssociation;
- (id)init;	// IMP=0x001000000057e03f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

