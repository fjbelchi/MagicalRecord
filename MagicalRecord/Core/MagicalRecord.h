//
//  MagicalRecord.h
//
//  Created by Saul Mora on 3/11/10.
//  Copyright 2010 Magical Panda Software, LLC All rights reserved.
//

#if TARGET_OS_IPHONE == 0
#define MAC_PLATFORM_ONLY YES
#endif

// enable to use caches for the fetchedResultsControllers (iOS only)
// #define STORE_USE_CACHE

#define MRLog(...) ((void)0)

#ifdef NS_BLOCKS_AVAILABLE

extern NSString * const kMagicalRecordCleanedUpNotification;

@class NSManagedObjectContext;
typedef void (^CoreDataBlock)(NSManagedObjectContext *context);

#endif

@interface MagicalRecord : NSObject

+ (NSInteger)version;
+ (NSString *)displayVersion;
+ (NSString *)build;

+ (NSString *) currentStack;

+ (void) cleanUp;

+ (void) setDefaultModelFromClass:(Class)klass;
+ (void) setDefaultModelNamed:(NSString *)modelName;
+ (NSString *) defaultStoreName;

@end
