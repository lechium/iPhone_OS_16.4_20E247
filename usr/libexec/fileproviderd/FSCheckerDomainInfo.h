//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FSCheckerDomainInfo : NSObject
{
    _Bool _usingFPFS;	// 8 = 0x8
    NSArray *_rootPaths;	// 16 = 0x10
    NSString *_domainID;	// 24 = 0x18
}

+ (id)domainInfoWithDomainID:(id)arg1 usingFPFS:(_Bool)arg2 andRootPaths:(id)arg3;	// IMP=0x0040000000002cfa
- (void).cxx_destruct;	// IMP=0x0020000000002e90
@property(retain) NSString *domainID; // @synthesize domainID=_domainID;
@property(retain) NSArray *rootPaths; // @synthesize rootPaths=_rootPaths;
@property _Bool usingFPFS; // @synthesize usingFPFS=_usingFPFS;
- (id)initWithDomainID:(id)arg1 usingFPFS:(_Bool)arg2 andRootPaths:(id)arg3;	// IMP=0x0010000000002d93
- (id)init;	// IMP=0x0010000000002d75

@end

