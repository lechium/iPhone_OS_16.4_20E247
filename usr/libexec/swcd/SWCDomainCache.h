//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SWCDomainCache : NSObject
{
    NSMutableDictionary *_cachedEntries;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000017122
- (id)_entriesFromDomain:(id)arg1;	// IMP=0x0010000000017089
@property(readonly, nonatomic) _Bool isValid;
- (void)clear;	// IMP=0x0010000000017052
- (id)entriesForDomain:(id)arg1;	// IMP=0x0010000000016c4b
- (void)updateCachedDomainsForEntries:(id)arg1;	// IMP=0x0010000000016862

@end
