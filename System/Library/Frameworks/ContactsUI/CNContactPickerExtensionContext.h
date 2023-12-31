//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerExtensionContext : NSExtensionContext
{
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x001000000011e3f2
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x001000000011e3c2
- (void)pickerDidCancel;	// IMP=0x000000000011ebee
- (void)pickerDidCompleteWithNewContact:(id)arg1;	// IMP=0x000000000011eaf1
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;	// IMP=0x000000000011e9cd
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;	// IMP=0x000000000011e8a9
- (void)pickerDidSelectAddNewContact;	// IMP=0x000000000011e7d1
- (void)invalidateSelectionAnimated:(_Bool)arg1;	// IMP=0x000000000011e767
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000011e6a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

