
namespace Hockey.Data;
{
	public class HockeyPlayer
{
	// data feilds
	private string _firstName;
	private string _lastName;
	private string _birthPlace;
	private DateOnly _dataOfBirth;
	private int _heightInInches;
	private in _weightInPounds;

	private Position _position;
	private Shot _position;

	//properties
	public string BirthPlace
	{
		get
		{
			return _birthPlace;
		}

		set
	
		{
			if(string.isNullOrWhiteSpace(value))
			{
				throw new ArgumentException("Birth place cannot be null or empty.");
			}
			_birthPlace = value;
		}
	}
}
	public string FirstName
	{
		get
		{
			// Accessor
			// The get block will return teh contents of the associated data field
			// The return has syntax of return expression
			return _firstName;
		}
		private set
		{
			// Mutator
			// The set block receives an incoming "value" and places it into the associated field
			// During the set, you can perform validation on the incoming value
			// During the set, you may also want to perform some logical processing using the value  
			//    to set another field

			// Ensure the incoming value is not null, empty, or whitespace (invalid values)
			if (Utils.Utilities.IsNullEmptyOrWhiteSpace(value))
			{
				throw new ArgumentException($"First name cannot be null or empty.");
			}

		// If we get here, the value is "good" and we can assign to the data field
		_firstName = value;
	}
	}
		public string LastName
	{
		get
		{
			return _lastName;
		}
		private set
		{
			if (Utils.Utilities.IsNullEmptyOrWhiteSpace(value))
			{
				throw new ArgumentException($"Last name cannot be null or empty.");
			}

			_lastName = value;
		}
	}

	public int HeightInInches
	{
		get
		{
			return _heightInInches;
		}

		set
		{
			if (value <= 0)
			{
				throw new ArgumentExeption("Height must be positive.");
			}
		_heightInInches = value;
		}
	}
			public int WeightInPounds
		{
			get
			{
				return _weightInPounds;
			}
			private set
			{
				if (!Utils.Utilities.IsPositive(value))
				{
					throw new ArgumentException($"Weight must be positive.");
				}

				_weightInPounds = value;
			}
		}

		public DataOnly DateOfBirth
		{
			get
			{
				return _dateOfBirth;
			}
			set
			{
				//todo implement a validity checks for dates in the future
				// Check the documentation for DateOnly
				if(value > DateOnly.FromDateTime(DateTime.Now)
				{
					
				}
				_dateOfBirth = value;
			}
		}
			//TODO: compete the remaining string properties

			// constructors

				public Position Position
			{
				get
				{
					return _position;
				}

				set
				{
						_position = value;
				}
			}
			public Shot Shot{ get; set; }
				public HockeyPlayer()
				{
				_firstName = string.Empty;

				}

}