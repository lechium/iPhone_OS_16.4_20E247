//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSFileProviderEnumerator-Protocol.h>

@class NSFileProviderDomainVersion;

@protocol NSFileProviderPendingSetEnumerator <NSFileProviderEnumerator>
@property(readonly, nonatomic, getter=isMaximumSizeReached) _Bool maximumSizeReached;
@property(readonly, nonatomic) double refreshInterval;
@property(readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@end

