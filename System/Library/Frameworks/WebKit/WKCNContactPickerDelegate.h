//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKCNContactPickerDelegate : NSObject
{
    struct WeakObjCPtr<id<CNContactPickerDelegate>> _contactPickerDelegate;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000003ba236
- (void).cxx_destruct;	// IMP=0x00000000003ba228
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00000000003ba1fd
- (id)initWithContactPickerDelegate:(id)arg1;	// IMP=0x00000000003ba1ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

