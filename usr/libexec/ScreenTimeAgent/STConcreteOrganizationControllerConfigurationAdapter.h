//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentContainer, STFamilySettingsManager, STRequestManager;

@interface STConcreteOrganizationControllerConfigurationAdapter : NSObject
{
    STFamilySettingsManager *_familySettingsManager;	// 8 = 0x8
    STRequestManager *_requestManager;	// 16 = 0x10
    NSPersistentContainer *_persistentContainer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001a7ce
- (id);	// IMP=0x001000000001a7ba
@property(readonly) STRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(readonly) STFamilySettingsManager *familySettingsManager; // @synthesize familySettingsManager=_familySettingsManager;
- (id)_handleConfigurationAsSettings:(id)arg1;	// IMP=0x001000000001a2dd
- (id)_handleConfigurationAsBlueprint:(id)arg1 timeout:(unsigned long long)arg2;	// IMP=0x0010000000019c0e
- (id)handleConfigurationChange:(id)arg1;	// IMP=0x00100000000197fe
- (id)initWithFamilySettingsManager:(id)arg1 requestManager:(id)arg2 persistentContainer:(id)arg3;	// IMP=0x001000000001973b

// Remaining properties
@property(readonly) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;

@end

