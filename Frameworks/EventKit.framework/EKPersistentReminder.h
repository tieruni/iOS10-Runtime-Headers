/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentReminder : EKPersistentCalendarItem {
    EKObjectID * _parentID;
}

@property (getter=isCompleted, nonatomic) bool completed;
@property (nonatomic, copy) NSDate *completionDate;
@property (nonatomic) unsigned long long displayOrder;
@property (nonatomic, copy) NSDate *dueDate;
@property (nonatomic) bool dueDateAllDay;
@property (nonatomic, copy) NSTimeZone *dueDateTimeZone;
@property (nonatomic, copy) NSDate *firstAlertDate;
@property (nonatomic, copy) EKObjectID *parentID;

+ (id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2;

- (void).cxx_destruct;
- (void)_sendModifiedNote;
- (id)completionDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)displayOrder;
- (id)dueDate;
- (bool)dueDateAllDay;
- (id)dueDateTimeZone;
- (int)entityType;
- (id)externalURI;
- (id)firstAlertDate;
- (bool)isCompleted;
- (id)parentID;
- (void)setCompleted:(bool)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (void)setDueDate:(id)arg1;
- (void)setDueDateAllDay:(bool)arg1;
- (void)setDueDateTimeZone:(id)arg1;
- (void)setFirstAlertDate:(id)arg1;
- (void)setParentID:(id)arg1;
- (bool)validate:(id*)arg1;

@end
