//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRRecentContactsLibrary;

__attribute__((visibility("hidden")))
@interface CNReputationCoreRecentsAdapter : NSObject
{
    CRRecentContactsLibrary *_library;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e6ee9
@property(readonly, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;
- (id)recentContactsForHandle:(id)arg1;	// IMP=0x00000000000e699b
- (id)initWithRecentContactsLibrary:(id)arg1;	// IMP=0x00000000000e691d
- (id)init;	// IMP=0x00000000000e6828

@end
